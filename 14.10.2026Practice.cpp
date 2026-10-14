#include <iostream>

using namespace std;

/* Task 2 
void swapNum(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
*/

/* Task 3 

void Array(int* arr, int size, int* sum, int* product) {
    *sum = 0;
    *product = 1;

    for (int i = 0; i < size; i++) {
        *sum += *(arr + i);
        *product *= *(arr + i);
    }
}
*/


/* Task 4 


void sumNum(int* arr, int size, int* negative, int* positive, int* zero) {
    *negative = 0;
    *positive = 0;
    *zero = 0;

    for (int i = 0; i < size; i++) {
        if (*(arr + i) > 0) {
            *positive += 1;
        }
        else if (*(arr + i) < 0) {
            *negative += 1;
        }
        else {
            *zero += 1; 
        }
    }
}
*/




/* Task 5 */

int* comparison(int* A, int sizeA, int* B, int sizeB) {
    for (int i = 0; i <= sizeA - sizeB; i++) {
        int count = 0;   

        for (int j = 0; j < sizeB; j++) {
            if (A[i + j] == B[j]) {
                count++;          
            }
            else {
                break;           
            }
        }
        if (count == sizeB) {
            return &A[i];         
        }
    }
    return 0;
}










int main()
{
    /* Task 1 

    int a = 20;
    int* ptr = &a;

    int b = 13;
    int* ptr2 = &b;

    if (*ptr > *ptr2) {
        cout << a << " is bigger then " << b; 
    }
    else {
        cout << b << " is bigger then " << a;
        
    }

    */

    /* Task 2 
    int a = 20;
    int b = 13;

    cout << a << " " << b << endl;
    swapNum(&a, &b);
    cout << a << " " << b << endl;
    */


    /* Task 3 
    int sum, product;
    int arr[5] = { 5, 7 , 2 ,0 ,17 };

    Array(arr, 5 , &sum, &product);

    cout << sum << " " << product << endl; 
    */


    /* Task 4

    int positive, negative , zero;
    int arr[8] = { 2, 0, -6, 32, 11, -4, 0, 22 };

    sumNum(arr, 8, &negative, &positive, &zero);

    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
    cout << "Zero: " << zero << endl;

     */

    /* Task 5 */

    int A[7] = { 11, 2, 0, -4, 19, 0 };
    int B[4] = { 2, 0, -4 };

    int* result = comparison(A, 6, B, 3);

    if (result != 0) {
        cout << "Found: " << *result << "\n";
    }
    else {
        cout << "Not found." << endl;
    }


}