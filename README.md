# GET_KEY Library

>The GET_KEY library enables the management of key presses and facilitates the comparison between individual keys and key combos.

## Features

- **Key Association and Combo Creation:** GET_KEY specializes in key association, allowing users to directly check if a specific key is pressed or not.

- **Limited Key Set:** The library currently focuses on recognizing lowercase and uppercase letters, along with essential keys like Ctrl, BackSpace, Delete, Up, Down, Right, Left, Space, LAlt, RAlt, LShift, and RShift. If you wish to implement additional keys, it's entirely up to you! ;)

## Note

If you have MinilibX installed, it needs to be in the parent root directory. If it's not already done, no need to worry the Makefile will handle it for you ! (Damn)

# Table of Contents

1. [Keys ? But how on earth do I call them?](#Keys-?-But-how-on-earth-do-I-call-them-?)
2. [Usage](#usage)
3. [Show me an exemple baby](#Show-me-an-exemple-baby)
4. [Mom, how do I launch this thing?](#make-rules)


## Keys ? But how on earth do I call them ?

- **For lowercase letters:**
 
	 ```c
	k_min_a();
	...
	k_min_z();
	```

- **For uppercase letters:**
	```c
	k_maj_a();
	...
	k_maj_z();
	```

- **For modified keys:**
	```c
	k_backspace();
	k_ctrl();
	k_ctrr();
	k_delete();
	k_down();
	k_escape();
	k_left();
	k_left_alt();
	k_left_shift();
	k_return();
	k_right();
	k_right_alt();
	k_right_shift();
	k_space();
	k_tab();
	k_up();
	``` 

## Usage

1. **Library Inclusion:** Begin by including the `get_key.h` header file in your project.

    ```c
    #include "get_key.h"
    ```

2. **Initialization:** In your main function, initialize the GET_KEY library.

    ```c
    get_key_init();
    ```

3. **Key Checks:**
   - Directly check if a key is pressed:

      ```c
      if (k_min_a())
      {
          // Code to execute when 'a' is pressed
      }
      ```

      ```c
      if (k_maj_a())
      {
          // Code to execute when 'A' is pressed
      }
      ```

4. **Combo Validation:**
	- Check combos of keys with macros included in GET_KEY:

		```c
		# define  K_ID_A  97
		...
		# define  K_ID_Z  122

		/*
		Modification keys ID
		*/
		# define  K_ID_RETURN  		65293 // (Return)
		# define  K_ID_ESCAPE  		65307 // (Escape)
		# define  K_ID_BACKSPACE  	65288 // (Backspace)
		# define  K_ID_TAB  		65289 // (Tab)
		# define  K_ID_DELETE  		65535 // (Delete)
		# define  K_ID_LEFT 		65361 // (Left arrow)
		# define  K_ID_UP  			65362 // (Up arrow)
		# define  K_ID_RIGHT  		65363 // (Right arrow)
		# define  K_ID_DOWN  		65364 // (Down arrow)
		# define  K_ID_LSHIFT  		65505 // (Left Shift)
		# define  K_ID_RSHIFT  		65506 // (Right Shift)
		# define  K_ID_CTRL  		65507 // (Left Control)
		# define  K_ID_CTRR  		65508 // (Right Control)
		# define  K_ID_LALT  		65513 // (Left Alt)
		# define  K_ID_RALT  		65027 // (Right Alt)
		# define  K_ID_SPACE  		32 // (Space)
		```
		Use the function `gk_check_combo(int minletter_id, int modifkey_id)` to check key combos:

		```c
		if (gk_check_combo(K_ID_A, K_ID_CTRL))
		{
			// Code to execute when 'Ctrl + a' is pressed
		}
		
		if (gk_check_combo(K_ID_R, K_ID_CTRL))
		{
			// Code to execute when 'Ctrl + r' is pressed
		}
		```

## Show me an exemple baby

```c
#include  "get_key.h"

int  close_window(void  *param)
{
	(void)param;
	free_all_memory_stuff("\nProgram terminated with the cross button.");
	
	return (exit(0), 0);
}

/*
	You must create this function to link it to mlx_hook,
	such as
	
	● 'mlx_hook(get_win_ptr(), 02, (1L << 0), key_center, NULL);'.
	
	Inside this function, you must necessarily call the following two functions:
	
	● gk_update_keycode(int keycode);
	● gk_key_press(int keycode);
*/

int  key_center(int  kc)
{
	gk_update_keycode(kc); // Mandatory
	gk_key_press(kc); // Mandatory

	// When 'a' pressed
	if (k_min_a())
		u_write_msg_on_std(1, "a", false); // To display 'a' on stdout (GET_KEY's function)

	// When 'Ctrl + a' pressed
	if (gk_check_combo(K_ID_A, K_ID_CTRL))
		u_write_msg_on_std(1, "Ctrl + a", false);

	// When 'A' pressed, you can use k_maj_a() instead
	if (gk_check_combo(K_ID_A, K_ID_LSHIFT))
		u_write_msg_on_std(1, "A", false);
	
	if (k_escape())
		free_all_memory_stuff("\nClosed by pressing the Escape key");

	return (0);
}

int  main(void)
{
	void  *mlx_ptr;
	void  *win_ptr;

	mlx_ptr  =  mlx_init();
	if (!mlx_ptr)
		return (free_all_memory_stuff("main"), 1);
	
	win_ptr  =  mlx_new_window(mlx_ptr, 500, 500,
					"Key Press and Combo Detection using minilibX");
	if (!win_ptr)
		return (free_all_memory_stuff("main"), 2);

	update_mlx_infos(mlx_ptr, win_ptr, NULL);
	get_key_init();
	mlx_hook(get_win_ptr(), 02, (1L  <<  0), key_center, NULL);
	mlx_hook(get_win_ptr(), 03, (1L  <<  1), gk_key_release, NULL);
	mlx_hook(get_win_ptr(), 17, 0, close_window, NULL);
	mlx_loop(get_mlx_ptr());

	return (0);
}
```

## Make rules

- Well, if you want to run a demo and try it out yourself, a main is included, and you can use the following rule: 

	- `make exec`.

 - If you want to add it to a project, use

	-  `make`

	And retrieve `get_key.a` to compile it with the rest of your code.

## Creator

*tboldrin*