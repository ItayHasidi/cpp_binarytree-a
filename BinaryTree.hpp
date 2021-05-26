#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdexcept>

// #ifndef BinTree_H
// #define BinTree_H

using namespace std;

// namespace ariel{

//     template<class T> class BinaryTree{
//         public:
//             BinaryTree();

//             BinaryTree add_root(T num);
//             BinaryTree add_left(T num1, T num2);
//             BinaryTree add_right(T num1, T num2);

//             typename std::vector<T>::iterator end_preorder();
//             typename std::vector<T>::iterator begin_preorder();
//             typename std::vector<T>::iterator end_inorder();
//             typename std::vector<T>::iterator begin_inorder();
//             typename std::vector<T>::iterator end_postorder();
//             typename std::vector<T>::iterator begin_postorder();

//             typename std::vector<T>::iterator begin();
//             typename std::vector<T>::iterator end();

//             friend ostream& operator<<(ostream& out, const BinaryTree& tree); 
//     };
// }

// ariel::BinaryTree<T>::BinaryTree();
// BinaryTree ariel::BinaryTree<T>::add_root(T);
// BinaryTree ariel::BinaryTree<T>::add_left(T, T);
// BinaryTree ariel::BinaryTree<T>::add_right(T, T);
// ostream& ariel::operator<<(std::ostream&, ariel::BinaryTree<T> const&);
// typename std::vector<T>::iterator ariel::BinaryTree<T>::begin_preorder();
// typename std::vector<T>::iterator ariel::BinaryTree<T>::end_preorder();
// typename std::vector<T>::iterator ariel::BinaryTree<T>::begin_inorder();
// typename std::vector<T>::iterator ariel::BinaryTree<T>::end_inorder();
// typename std::vector<T>::iterator ariel::BinaryTree<T>::begin_postorder();
// typename std::vector<T>::iterator ariel::BinaryTree<T>::end_postorder();
// typename std::vector<T>::iterator ariel::BinaryTree<T>::begin();
// typename std::vector<T>::iterator ariel::BinaryTree<T>::end();


namespace ariel{
    template<class T> class Node{
        public:
            T val=0; 
            int id=0;
            Node *left, *right, *prev;
            Node(){
                Node temp;
                Node *p_temp = &temp;
                p_temp = nullptr;
                this->left = p_temp;
                this->right = p_temp;
                this->prev = p_temp;
            }

            Node(T val){
                this->val = val;
                Node();
            }

            Node& operator=(const Node other){
                this->id = other.id;
                this->val = other.val;
                this->left = other.left;
                this->right = other.right;
                this->prev = other.prev;
            }
 
    };

    template<class T> class BinaryTree{
        public:
            // Node<T> &head;
            typename std::vector<T>::iterator itr;

            BinaryTree(){
                // Node<T> newHead;
                // this->head = newHead;
            }
            BinaryTree add_root(T num){
                // Node tempNode;
                // this->head = 
                // this->head.val = num;
                // return ;
                return *this;
            }
            BinaryTree add_left(T num1, T num2){

                // return 
                return *this;
            }
            BinaryTree add_right(T num1, T num2){

                return *this;
            }
            typename std::vector<T>::iterator end_preorder(){

                return itr;
            }
            typename std::vector<T>::iterator begin_preorder(){

                return itr;
            }
            typename std::vector<T>::iterator end_inorder(){

                return itr;
            }
            typename std::vector<T>::iterator begin_inorder(){

                return itr;
            }
            typename std::vector<T>::iterator end_postorder(){

                return itr;
            }
            typename std::vector<T>::iterator begin_postorder(){

                return itr;
            }
            typename std::vector<T>::iterator begin(){
                return itr;

            }
            typename std::vector<T>::iterator end(){
                
                return itr;
            }

            friend ostream& operator<<(ostream& out, const BinaryTree& tree){
            //     // return out << num.val << "[" << num.unit << "]";
                return out;
            } 

    };
    // ostream& operator<<(ostream& out, const BinaryTree<class T>& tree){
    // //     // return out << num.val << "[" << num.unit << "]";
    //     return out;
    // }
}
// #endif
