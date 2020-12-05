#include "node.h"
#include <vector>
#include <string>

class Matrix{
    private:
        Node* head;
        int size;
        int rows;
        int cols;

    public:
        Matrix(); //this->head = nullptr;
        ~Matrix();
        Matrix(int data);
        Matrix(int rows, int cols);

        //void push_front(int data);
        void push_back(int data, int row, int col);

        void add_matrix(Matrix matrix_one, Matrix matrix_two);

        //void insert(int data, int idx);
        void remove(int data);
        bool contains(int data);
        int get_size();
        int get_rows();
        int get_cols();
        Node* get_head();
        void print_matrix(int rows, int cols, std::string type);
};