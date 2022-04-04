#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <vector>
#include <iostream>

class hashtable
{
    public:
        int global_depth;
        int num_buckets;
        hashtable(int, int);
        void print_table();
        virtual ~hashtable();
    protected:
    private:
};

#endif // HASHTABLE_H


using namespace std;

hashtable::hashtable(int global, int bucket_size)
{
    int global_depth = global;
    vector<int> table[bucket_size + 2];
    for(int i = 0; i < global_depth; i++){
        table[0].push_back(i);
        for(int j = i; j <= bucket_size; j++){
            table[j].push_back(-1);
        }
    }
}


void hashtable::print_table(){
    cout << global_depth;

}

hashtable::~hashtable()
{
    //dtor
}

int main(){

    return 0;
}
