#!/bin/bash
#include <stdio.h> 
int main(void) { int i; long int l; long long int ll; float d; char c;  printf("Size of a char: %lu bytes(s)\n", sizeof(c)); printf("Size of an int: %lu bytes(s)\n", sizeof(i)); printf("Size of a long int: %lu bytes(s)\n", sizeof(l)); printf("Size of a long long int: %lu bytes(s)\n", sizeof(ll)); printf("Size of a float: %lu bytes(s)\n", sizeof(d)); return(0); }
