## To add your event

### Important
>This is not the final version. The current version is not well-optimized and tedious to implement, but it is the only one available for now before I make improvements soon ;)

**Note**
>The next version will be simpler, with just one function, 'void add_my_modif_key(int your_macro),' that will initialize and set it up for you. However, as for the macro, you will still need to implement it yourself.
  
### Well, let's do this man

- Firstly, you need to retrieve the key's ID using the mlx keycode.
To do this, you can simply add the following line at the beginning of the `int key_center(int kc)` function:

```c
printf("%d\n", kc);
```
- Once you have obtained it, add a macro to the `get_key.h` file like this:
```c
# define K_ID_MY_KEY_EVENT (here the mlx keycode for this key)
```
- Next, you need to add one to the `modif_key` array.
To achieve this,

	You can simply increment the value of the `GK_MODIF_KEYS` macro.
	Then, you need to initialize your `modif_key` event to make it exist.

- In the `void gk_modif_key_init_id(t_gk_modification_keys *instance)` function,
add your `modif_key`'s ID. Here's an example:

  

```c
void  gk_modif_key_init_id(t_gk_modification_keys *instance)
{
	// ... (existing initialization code)

	// Yours
	instance->gk_modif_k_id[GK_MODIF_KEYS + 1] = K_ID_MY_KEY_EVENT;
}
```

- The last step involves creating your own function.
Here is the syntax to add one:

```c
bool  k_your_modif_key_name(void)
{
	if (gk_check_modif_key(K_ID_MY_KEY_EVENT))
		return (true);
	return (false);
}
```