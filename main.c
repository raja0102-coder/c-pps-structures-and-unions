#include <stdio.h>
#include <string.h>

// 1. Nested Structure Definition
typedef struct {
    char city[30];
    int pinCode;
} Address;

typedef struct {
    int rollNo;
    char name[50];
    float gpa;
    Address addr; // Nested structure
} Student;

// 2. Union Definition (Demonstrating shared memory allocation)
union Data {
    int iKey;
    float fVal;
    char code[4];
};

int main() {
    printf("==================================================\n");
    printf("      PPS STRUCTURES & UNIONS ENGINE              \n");
    printf("==================================================\n\n");

    // 1. Array of Structures & Nested Structures
    printf("[1] NESTED STRUCTURES & ARRAY OF RECORDS:\n");
    Student classRoom[2] = {
        {101, "Aarav Sharma", 8.85, {"Jaipur", 302017}},
        {102, "Priya Singh", 9.20, {"Muzaffarpur", 842001}}
    };

    for (int i = 0; i < 2; i++) {
        printf("    Student %d -> Roll: %d | Name: %-14s | GPA: %.2f | City: %s (%d)\n",
               i + 1, classRoom[i].rollNo, classRoom[i].name, classRoom[i].gpa,
               classRoom[i].addr.city, classRoom[i].addr.pinCode);
    }
    printf("\n");

    // 2. Size Comparison & Memory Overlap: struct vs union
    printf("[2] MEMORY ALLOCATION (STRUCT VS UNION):\n");
    printf("    Size of Student Structure : %lu bytes\n", sizeof(Student));
    
    union Data d;
    d.iKey = 65; // ASCII 'A'
    printf("    Size of Union Data        : %lu bytes (shares memory)\n", sizeof(union Data));
    printf("    Union stored as int       : %d\n", d.iKey);
    printf("    Union stored as char[0]   : %c (Shared memory overlay)\n", d.code[0]);

    printf("\n==================================================\n");

    return 0;
}
