# Doubly Linked List Reversal

This repository contains a C++ implementation to reverse the data elements of a doubly linked list using a stack-based approach.

## Overview

A doubly linked list (DLL) is a data structure consisting of nodes that have pointers to both the previous and next nodes. Reversing a DLL typically involves re-linking the `next` and `prev` pointers. However, this implementation reverses the data contained within the nodes without modifying their pointers.

The approach is:
- Traverse the DLL from head to tail and push all node data onto a stack.
- Traverse the DLL again from head to tail, popping data from the stack and assigning it to each node.
  
This effectively reverses the list's node values while keeping the node connections intact.

## Features

- Simple and easy-to-understand stack-based reversal
- Does not alter the structure of the linked list
- Time complexity: O(n), where n is the number of nodes
- Space complexity: O(n) due to usage of stack to store node values


    temp->data = x;
    temp = temp->next;
}

return head;
