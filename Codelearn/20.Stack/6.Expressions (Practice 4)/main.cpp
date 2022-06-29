/*
 *  20.Stack | 6.Expressions (Practice 4)
 */

#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\20.Stack\6.Expressions (Practice 4)\func.h"

/*
* Given string with only '{' and '}';
* '{}' is balance expressions
* '}{', '{{', '}}' are unbalance expressions
* 
*  Write a function that output how many times it take to turn all unbalance expressions to balance expression
*/

/*
* 1. Nếu số phần ký tự trong chuỗi ban đầu là một số lẻ thì hàm trả kết quả '-1'
* 
* 2. Duyệt chuỗi, xóa hết các cặp biểu thức cân bằng (một cặp bao gồm "{" và "}"
*    (chú ý theo đúng thứ tự này và ở bất kỳ vị trí nào trong chuỗi được cho))
* 
* 3. Chuỗi còn lại sẽ có dạng ..}..}..{..{... và đã nằm trong stack.
*    Duyệt stack này theo cặp hai ký tự, nếu cặp nào có dạng "{{" hay "}}" thì mất 1 lần chuyển đổi, với cặp ký tự "}{" cần 2 lần chuyển đổi, kết quả cuối cùng sẽ là tổng số lần chuyển đổi trong vòng lặp cuối
*/

int main()
{
    system("cls");  // Clear Vscode Terminal
    const unsigned short testcase = 3;  // Select test case

    switch (testcase)
    {
        // reversals() - vector only approach
        // reversals_s() - stack approach
        case 1:
        {
            {
                std::string given_str = "{{}{{}}}";
                std::cout << "Vector only: " << reversals(given_str) << std::endl;
                std::cout << "Stack: " << reversals_s(given_str) << std::endl;
            }
            break;
        }

        case 2:
        {
            {
                std::string given_str = "}{";
                std::cout << "Vector only: " << reversals(given_str) << std::endl;
                std::cout << "Stack: " << reversals_s(given_str) << std::endl;
            }
            break;
        }

        case 3:
        {
            {
                std::string given_str = "}{{}}{{{";
                std::cout << "Vector only: " << reversals(given_str) << std::endl;
                std::cout << "Stack: " << reversals_s(given_str) << std::endl;
            }
            break;
        }

        default:
        {
            break;
        }
    }

	return 0;
}