#include "uninitializedclassmembers.h"

UninitializedClassMembers::UninitializedClassMembers()
    :inited(), inited_1st(inited)
{
}
