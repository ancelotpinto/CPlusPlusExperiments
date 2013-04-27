Redefining keywords
=
[Redefining keywords][1] via the preprocessor is technically supposed to cause an error but tools allow it in practice. This lets you do fun bug-introducing stuff like #define true false or #define else. However, there are times it is legitimately useful. For example, if you're using a large library and you need to bypass the C++ access protection mechanism, instead of patching the library you can just turn off access protection before including the headers for the library. Remember to turn the protection back on afterwards!

        #define class struct
        #define private public
        #define protected public
            #include "library.h"
        #undef class
        #undef private
        #undef protected

Note that this may not necessarily work depending on your compiler. C++ only requires instance variables to be laid out sequentially when they are not separated by an access specifier, so the compiler is free to change the memory layout by reordering access specifier groups. For example, a compiler is allowed to move all private members so they come after after all public members. Another potential problem is name mangling; Microsoft's C++ compiler incorporates the access specifier into their name mangling scheme so changing the access specifier will break compatibility with existing compiled code.

[1]:http://madebyevan.com/obscure-cpp-features/#redefining-keywords
