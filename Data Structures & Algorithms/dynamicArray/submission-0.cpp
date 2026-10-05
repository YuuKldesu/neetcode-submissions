class DynamicArray {
private:
    int* arr;
    int length;
    int capacity;

public:
    DynamicArray(int capacity) {
        this -> capacity = capacity;
        length = 0;
        arr = new int[capacity];
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if(length == capacity)resize();
        arr[length++] = n;
    }

    int popback() {
        return arr[--length];
    }

    void resize() {
        int* newArr = new int[capacity * 2];
        for(int i = 0;i < length;++i){
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
        capacity *= 2;
    }

    int getSize() {
        return length;
    }

    int getCapacity() {
        return capacity;
    }

    ~DynamicArray() {
        delete[] arr;
    }
};
