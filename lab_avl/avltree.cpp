#include <iostream>
/**
 * @file avltree.cpp
 * Definitions of the binary tree functions you'll be writing for this lab.
 * You'll need to modify this file.
 */

template <class K, class V>
V AVLTree<K, V>::find(const K& key) const
{
    return find(root, key);
}

template <class K, class V>
V AVLTree<K, V>::find(Node* subtree, const K& key) const
{
    if (subtree == NULL)
        return V();
    else if (key == subtree->key)
        return subtree->value;
    else {
        if (key < subtree->key)
            return find(subtree->left, key);
        else
            return find(subtree->right, key);
    }
}

template <class K, class V>
void AVLTree<K, V>::rotateLeft(Node*& t)
{
    functionCalls.push_back("rotateLeft"); // Stores the rotation name (don't remove this)
    // your code here
    Node *temp = t;
    t = t->right;
    temp->right = t->left;
    t->left = temp;
}

template <class K, class V>
void AVLTree<K, V>::rotateLeftRight(Node*& t)
{
    functionCalls.push_back("rotateLeftRight"); // Stores the rotation name (don't remove this)
    // Implemented for you:
    rotateLeft(t->left);
    rotateRight(t);
}

template <class K, class V>
void AVLTree<K, V>::rotateRight(Node*& t)
{
    functionCalls.push_back("rotateRight"); // Stores the rotation name (don't remove this)
    // your code here
    Node *temp = t;
    t = t->left;
    temp->left = t->right;
    t->right = temp;
}

template <class K, class V>
void AVLTree<K, V>::rotateRightLeft(Node*& t)
{
    functionCalls.push_back("rotateRightLeft"); // Stores the rotation name (don't remove this)
    // your code here
    rotateRight(t->right);
    rotateLeft(t);
}

template <class K, class V>
void AVLTree<K, V>::rebalance(Node*& subtree)
{
    // your code here
    if (subtree == NULL) {
      return;
    }
    if (subtree->left == NULL && subtree->right == NULL) {
      // height is already set to 0.
      return;
    }

    int balance;
    int balanceL;
    int balanceR;

    // update height and balance
    if (subtree->left == NULL) {
      subtree->height = subtree->right->height + 1;
      balance = 2;
    } else if (subtree->right == NULL) {
      subtree->height = subtree->left->height + 1;
      balance = -2;
    } else if (subtree->left->height > subtree->right->height) {
      subtree->height = subtree->left->height + 1;
      balance = subtree->right->height - subtree->left->height;
    } else {
      subtree->height = subtree->right->height + 1;
      balance = subtree->right->height - subtree->left->height;
    }

    // the case no need to rebalance
    if (subtree->height < 2) {
      return;
    }

    if (balance == 2) {
      if (subtree->right->left == NULL) {
        balanceR = 1;
      } else if (subtree->right->right == NULL) {
        balanceR = -1;
      } else {
        balanceR = subtree->right->right->height - subtree->right->left->height;
      }
    }
    if (balance == -2) {
      if (subtree->left->left == NULL) {
        balanceL = 1;
      } else if (subtree->left->right == NULL) {
        balanceL = -1;
      } else {
        balanceL = subtree->left->right->height - subtree->left->left->height;
      }
    }

    if (balance == 2 && balanceR == 1) {
      rotateLeft(subtree);
      subtree->left->height -=2;
      //std::cout << "Left" << std::endl;
    }
    if (balance == -2 && balanceL == -1) {
      rotateRight(subtree);
      subtree->right->height -= 2;
      //std::cout << "Right" << std::endl;
    }
    if (balance == 2 && balanceR == -1) {
      rotateRightLeft(subtree);
      subtree->height += 1;
      subtree->left->height -= 2;
      //std::cout << "RightLeft" << std::endl;
    }
    if (balance == -2 && balanceL == 1) {
      rotateLeftRight(subtree);
      subtree->height += 1;
      subtree->right->height -= 2;
      //std::cout << "LeftRight" << std::endl;
    }
}

template <class K, class V>
void AVLTree<K, V>::insert(const K & key, const V & value)
{
    insert(root, key, value);
}

template <class K, class V>
void AVLTree<K, V>::insert(Node*& subtree, const K& key, const V& value)
{
    // your code here
    if (subtree == NULL) {
      subtree = new Node(key, value);
      return;
    }
    if (key < subtree->key) {
      if (subtree->left == NULL) {
        subtree->left = new Node(key, value);
        rebalance(subtree);
        return;
      } else {
        insert(subtree->left, key, value);
        //std::cout << "rotate: " << subtree->key << std::endl;
        rebalance(subtree);
      }
    } else {
      if (subtree->right == NULL) {
        subtree->right = new Node(key, value);
        rebalance(subtree);
        return;
      } else {
        insert(subtree->right, key, value);
        //std::cout << "rotate: " << subtree->key << std::endl;
        rebalance(subtree);
      }
    }
}

template <class K, class V>
void AVLTree<K, V>::remove(const K& key)
{
    remove(root, key);
}

template <class K, class V>
void AVLTree<K, V>::remove(Node*& subtree, const K& key)
{
    if (subtree == NULL)
        return;

    if (key < subtree->key) {
        // your code here
        remove(subtree->left, key);
        rebalance(subtree);
    } else if (key > subtree->key) {
        // your code here
        remove(subtree->right, key);
        rebalance(subtree);
    } else {
        if (subtree->left == NULL && subtree->right == NULL) {
            /* no-child remove */
            // your code here
            delete subtree;
            subtree = NULL;
        } else if (subtree->left != NULL && subtree->right != NULL) {
            /* two-child remove */
            // your code here
            Node* iop = subtree->left;
            while (iop->right != NULL) {
              iop = iop->right;
            }
            swap(iop, subtree);
            remove(subtree->left, key);
            rebalance(subtree);
        } else {
            /* one-child remove */
            // your code here
            if (subtree->left != NULL) {
              Node* temp = subtree->left;
              delete subtree;
              subtree = temp;
              rebalance(subtree);
            }
            if (subtree->right != NULL) {
              Node* temp = subtree->right;
              delete subtree;
              subtree = temp;
              rebalance(subtree);
            }
        }
        // your code here
    }
}
