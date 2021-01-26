#ifndef __INTEGER_ARRAY__
#define __INTEGER_ARRAY__

class IntegerArray {

    private:
        int *data;
        int size;
    public:
        IntegerArray(int size);
        IntegerArray(IntegerArray &o);
        ~IntegerArray();

};

#endif