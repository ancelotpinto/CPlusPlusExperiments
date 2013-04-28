#ifndef SIZEANDLAYOUT_H
#define SIZEANDLAYOUT_H

class SizeAndLayout
{
public:
#ifdef KEEP_CLASS_SIZE
    int firstMem;
#endif
    int secondMem;
    int thirdMem;
public:
    SizeAndLayout();
};

#endif // SIZEANDLAYOUT_H
