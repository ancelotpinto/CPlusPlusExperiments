Compilation Firewalls
=
C++ assumes that callers know two main things about a class that can be affected by [private members][1]:

**Size and Layout:** The calling code must know the size and layout of the
class, including private data members. This constraint of always being able to
see implementations incurs the cost of more tightly coupling callers and
callees, but is central to C++’s object model and philosophy because
guaranteeing that the compiler has direct access to objects by default is an
(perhaps “the”) essential ingredient in enabling C++ to achieve its famed
heavily-optimizable efficiency.

**Functions:** The calling code must be able to resolve calls to member
functions of the class, including inaccessible private functions that overload
with nonprivate functions — if the private function is a better match, the
calling code will fail to compile. (C++ took the deliberate design decision to
perform overload resolution before accessibility checking for safety reasons.
For example, it was felt that changing the accessibility of a function from
private to public shouldn’t change the meaning of legal calling code.)

[1]:http://herbsutter.com/gotw/_100/
