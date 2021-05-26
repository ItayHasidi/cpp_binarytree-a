#include "doctest.h"
#include "BinaryTree.hpp"
using namespace ariel;
using namespace std;

///////integers///////

TEST_CASE("Checking integer tree build"){
    BinaryTree<int> tree;
    CHECK_THROWS(tree.add_left(0,1));
    CHECK_THROWS(tree.add_right(0,1));
}

TEST_CASE("Checking inorder integer tree") {
    BinaryTree<int> tree;
    CHECK_NOTHROW(tree.add_root(4)) ;
    CHECK_NOTHROW(tree.add_left(4,2));
    CHECK_NOTHROW(tree.add_right(4,5));
    CHECK_NOTHROW(tree.add_left(2,1));
    CHECK_NOTHROW(tree.add_right(2,3));
    int num = 1;
    for (auto it=tree.begin_inorder(); it!=tree.end_inorder(); it++) {
        CHECK(*it == num++);
    }
}

TEST_CASE("Checking preorder integer tree") {
    BinaryTree<int> tree;
    CHECK_NOTHROW(tree.add_root(1)) ;
    CHECK_NOTHROW(tree.add_left(1,2));
    CHECK_NOTHROW(tree.add_right(1,5));
    CHECK_NOTHROW(tree.add_left(2,3));
    CHECK_NOTHROW(tree.add_right(2,4));
    int num = 1;
    for (auto it=tree.begin_preorder(); it!=tree.end_preorder(); it++) {
        CHECK(*it == num++);
    }
}

TEST_CASE("Checking postorder integer tree") {
    BinaryTree<int> tree;
    CHECK_NOTHROW(tree.add_root(5)) ;
    CHECK_NOTHROW(tree.add_left(5,3));
    CHECK_NOTHROW(tree.add_right(5,4));
    CHECK_NOTHROW(tree.add_left(3,1));
    CHECK_NOTHROW(tree.add_right(3,2));
    int num = 1;
    for (auto it=tree.begin_postorder(); it!=tree.end_postorder(); it++) {
        CHECK(*it == num++);
    }
}


///////chars///////

TEST_CASE("Checking char tree build"){
    BinaryTree<char> tree;
    CHECK_THROWS(tree.add_left('a','b'));
    CHECK_THROWS(tree.add_right('a','b'));
}

TEST_CASE("Checking inorder char tree") {
    BinaryTree<char> tree;
    CHECK_NOTHROW(tree.add_root('d'));
    CHECK_NOTHROW(tree.add_left('d','b'));
    CHECK_NOTHROW(tree.add_right('d','e'));
    CHECK_NOTHROW(tree.add_left('b','a'));
    CHECK_NOTHROW(tree.add_right('b','c'));
    char ch = 'a';
    for (auto it=tree.begin_inorder(); it!=tree.end_inorder(); it++) {
        CHECK(*it == ch++);
    }
}

TEST_CASE("Checking preorder char tree") {
    BinaryTree<char> tree;
    CHECK_NOTHROW(tree.add_root('a'));
    CHECK_NOTHROW(tree.add_left('a','b'));
    CHECK_NOTHROW(tree.add_right('a','e'));
    CHECK_NOTHROW(tree.add_left('b','c'));
    CHECK_NOTHROW(tree.add_right('b','d'));
    char ch = 'a';
    for (auto it=tree.begin_preorder(); it!=tree.end_preorder(); it++) {
        CHECK(*it == ch++);
    }
}

TEST_CASE("Checking postorder char tree") {
    BinaryTree<char> tree;
    CHECK_NOTHROW(tree.add_root('e'));
    CHECK_NOTHROW(tree.add_left('e','c'));
    CHECK_NOTHROW(tree.add_right('e','d'));
    CHECK_NOTHROW(tree.add_left('c','a'));
    CHECK_NOTHROW(tree.add_right('c','b'));
    char ch = 'a';
    for (auto it=tree.begin_postorder(); it!=tree.end_postorder(); it++) {
        CHECK(*it == ch++);
    }
}



///////doubles///////

TEST_CASE("Checking double tree build"){
    BinaryTree<double> tree;
    CHECK_THROWS(tree.add_left(0,0.1));
    CHECK_THROWS(tree.add_right(0,0.1));
}

TEST_CASE("Checking inorder double tree") {
    BinaryTree<double> tree;
    CHECK_NOTHROW(tree.add_root(0.4));
    CHECK_NOTHROW(tree.add_left(0.4,0.2));
    CHECK_NOTHROW(tree.add_right(0.4,0.5));
    CHECK_NOTHROW(tree.add_left(0.2,0.1));
    CHECK_NOTHROW(tree.add_right(0.2,0.3));
    double num = 0.1;
    for (auto it=tree.begin_inorder(); it!=tree.end_inorder(); it++) {
        CHECK(*it == num++);
        num += 0.1;
    }
}

TEST_CASE("Checking preorder double tree") {
    BinaryTree<double> tree;
    CHECK_NOTHROW(tree.add_root(0.1));
    CHECK_NOTHROW(tree.add_left(0.1,0.2));
    CHECK_NOTHROW(tree.add_right(0.1,0.5));
    CHECK_NOTHROW(tree.add_left(0.2,0.3));
    CHECK_NOTHROW(tree.add_right(0.2,0.4));
    double num = 0.1;
    for (auto it=tree.begin_preorder(); it!=tree.end_preorder(); it++) {
        CHECK(*it == num);
        num += 0.1;
    }
}

TEST_CASE("Checking postorder double tree") {
    BinaryTree<double> tree;
    CHECK_NOTHROW(tree.add_root(0.5));
    CHECK_NOTHROW(tree.add_left(0.5,0.3));
    CHECK_NOTHROW(tree.add_right(0.5,0.4));
    CHECK_NOTHROW(tree.add_left(0.3,0.1));
    CHECK_NOTHROW(tree.add_right(0.3,0.2));
    double num = 0.1;
    for (auto it=tree.begin_postorder(); it!=tree.end_postorder(); it++) {
        CHECK(*it == num++);
        num += 0.1;
    }
}


///////strings///////

TEST_CASE("Checking string tree build"){
    BinaryTree<string> tree;
    CHECK_THROWS(tree.add_left(0,"a"));
    CHECK_THROWS(tree.add_right(0,"a"));
}

TEST_CASE("Checking inorder string tree") {
    BinaryTree<string> tree;
    CHECK_NOTHROW(tree.add_root("abcd"));
    CHECK_NOTHROW(tree.add_left("abcd","ab"));
    CHECK_NOTHROW(tree.add_right("abcd","abcde"));
    CHECK_NOTHROW(tree.add_left("ab","a"));
    CHECK_NOTHROW(tree.add_right("ab","abc"));
    string str = "a";
    char ch = 'b';
    for (auto it=tree.begin_inorder(); it!=tree.end_inorder(); it++) {
        CHECK(*it == str);
        str += ch++;
    }
}

TEST_CASE("Checking preorder string tree") {
    BinaryTree<string> tree;
    CHECK_NOTHROW(tree.add_root("a"));
    CHECK_NOTHROW(tree.add_left("a","ab"));
    CHECK_NOTHROW(tree.add_right("a","abcde"));
    CHECK_NOTHROW(tree.add_left("ab","abc"));
    CHECK_NOTHROW(tree.add_right("ab","abcd"));
    string str = "a";
    char ch = 'b';
    for (auto it=tree.begin_preorder(); it!=tree.end_preorder(); it++) {
        CHECK(*it == str);
        str += ch++;
    }
}

TEST_CASE("Checking postorder string tree") {
    BinaryTree<string> tree;
    CHECK_NOTHROW(tree.add_root("abcde"));
    CHECK_NOTHROW(tree.add_left("abcde","abc"));
    CHECK_NOTHROW(tree.add_right("abcde","abcd"));
    CHECK_NOTHROW(tree.add_left("abc","a"));
    CHECK_NOTHROW(tree.add_right("abc","ab"));
    string str = "a";
    char ch = 'b';
    for (auto it=tree.begin_postorder(); it!=tree.end_postorder(); it++) {
        CHECK(*it == str);
        str += ch++;
    }
}
