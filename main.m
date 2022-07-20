#import <Foundation/Foundation.h>
#import "Student.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Student* student = [Student new];
        [student study: 10.1];
    }
    return 0;
}
