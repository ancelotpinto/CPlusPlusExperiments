Functions as Template Parameters
=
It's well known that template parameters can be specific integers but they can also be [specific functions][1]. This lets the compiler inline calls to that specific function in the instantiated template code for more efficient execution. In the example below, the function memoize takes a function as a template parameter and only calls the function for new argument values (old argument values are remembered from the cache).

[1]:http://madebyevan.com/obscure-cpp-features/#functions-as-template-parameters
