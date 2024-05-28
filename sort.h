#pragma once
#include<iostream>
#include<string>
using namespace std;
class cort {
public:
   
    template <typename T, size_t N>
    T Max(const T(&arr)[N]) {
     
        T max = arr[0];
        for (size_t i = 1; i < N; ++i) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }

        return max;
    }

   
    template <typename T, size_t N>
    T Min(const T(&arr)[N]) {
        T min = arr[0];
        for (size_t i = 1; i < N; ++i) {
            if (arr[i] < min) {
                min = arr[i];
            }
        }

        return min;
    }

    
    template <typename T, size_t N>
    void bubbleS(T(&arr)[N]) {
        for (size_t i = 0; i < N - 1; ++i) {
            for (size_t j = 0; j < N - i - 1; ++j) {
                if (arr[j] > arr[j + 1]) {
                    T h = arr[j]
                        arr[j] = arr[j + 1];
                    arr[j + 1] = h;
                   
                }
            }
        }
    }

   
    template <typename T, size_t N>
    int binSe(const T(&arr)[N], const T& key) {
        int left = 0;
        int right = N - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == key) {
                return mid;
            }
            if (arr[mid] < key) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return -1; 
    }

    
    template <typename T, size_t N>
    void repEl(T(&arr)[N], const T& oldValue, const T& newValue) {
        for (size_t i = 0; i < N; ++i) {
            if (arr[i] == oldValue) {
                arr[i] = newValue;
                break; 
            }
        }
    }

    
};