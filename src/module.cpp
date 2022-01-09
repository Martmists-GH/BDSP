#define STR(x) #x
#define QUOTE(x) STR(x)
#define MODULE_NAME_STR QUOTE(MODULE_NAME)

// rtld working object
__attribute__((section(".bss"))) char __nx_module_runtime[0xD0];

struct ModuleName {
    int unknown;
    int name_length;
    char name[MODULE_NAME_LEN + 1];
};

__attribute__((section(".rodata.module_name")))
ModuleName module_name = {.unknown = 0, .name_length = MODULE_NAME_LEN, .name = MODULE_NAME_STR};
