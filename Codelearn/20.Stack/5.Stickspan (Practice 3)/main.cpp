/*
 *	20.Stack | 5.Stickspan (Practice 3)
 */

#include <iostream>
#include <vector>
#include <stack>

/*
*   Calculate the distance of each wooden stick from the nearest left stick. 
*   (↑ the one that is longer and nearest) 
*   
*   Example:
*   - Given int vector (represent the length of each wooden stick): [100,80,60,70,60,75,85]
*   - Expect result (output vector): [1,1,1,2,1,4,6]
* 
*   - 1st stick '100' has none to the left: adding '1' as a result (pretends like theres one)
*   - 2nd stick '80' | the closest one on the left and is longer is: 100 (Adding '1' to result vector)
*   - 3nd stick '60' | the closest one on the left and is longer is: 70 (Adding '1' to result vector)
*   - 4nd stick '70' | the closest one on the left and is longer is: 80 (Adding '2' to result vector)
*   - 5nd stick '60' | the closest one on the left and is longer is: 70 (Adding '1' to result vector)
*   - 6nd stick '75' | the closest one on the left and is longer is: 80 (Adding '4' to result vector)
*   - 7nd stick '85' | the closest one on the left and is longer is: 100 (Adding '6' to result vector)
*/

std::vector<int> stickSpan(std::vector<int> arr) // Vector only approach
{
    // Create 'ret' vector to store results
    std::vector<int> ret;
    ret.push_back(1); // The first stick have none to the left, lets just pretends like theres one (adding result '1')

    for (int i = 1; i < arr.size(); i++) // Looping through every stick, skip the first one (already known result)
    {
        /*
        * ↓ Looping backwards, to find the closest stick that is longer (to the left) 
        * 
        * i.e:
        * Assuming we on third i loop: int i = 3; int x = 2 (x = i - 1)
        * 1. if (arr[2] > arr[3]) .....
        * 2. if (arr[1] > arr[3]) .....
        * 3. if (arr[0] > arr[3]) ..... 
        */
        for (int x = i - 1; x != -1; x--)
        {
            if (arr[x] > arr[i]) { ret.push_back(i - x); break; } // Result for the current stick is found, break the x loop;
            if (x == 0 && arr[i] > arr[x]) { ret.push_back(i - x + 1); break; } // If at the last loop and no stick found, pretends there one on the left of the first stick
        }
    }
    
    return ret; // Return the results
}

std::vector<int> stickSpan_S(std::vector<int> arr) // Stack approach
{
    // Create 'ret' vector to store results
    // Create 'st' stack to store positions of the stick
    std::stack<int> st;
    std::vector <int> ret;
    int n = arr.size();

    st.push(0); // Start position is '0' | [10,4,5,90,120,80] equivalent to [0, 1, 2, 3, 4, 5]
    ret.push_back(1); // The first stick have none to the left, lets just pretends like theres one (adding result '1')

    for (int i = 1; i < n; i++) { // Looping through every stick, skip the first one (already known result)

        /*
        *   If the stack is not empty and its top(stick) shorter or equal to current stick
        *   then pop stack until top is the one that longer than current stick
        */ 
        while (!st.empty() && arr[st.top()] <= arr[i])
            st.pop();

        /*
        *   Using conditional operator
        *   if stack is empty, store the result : i + 1
        *   else stack is not empty, store the result: i - st.top()
        * 
        *   i.e:
        *   Loop 1 (i = 1, arr[1] = 4):
        *   1. st is not empty(storing: 0) & arr[0](10) > arr[1](4) -> no more pop
        *   2. st is not empty, storing 1 - 0(i - st.top()) to result vector
        *   3. Adding position '1' to st
        * 
        *   Loop 2 (i = 2, arr[2] = 5):
        *   1. st is not empty(storing: 1, 0) & arr[1](4) < arr[2](5) -> pop top '1'
        *   2. st is not empty(storing: 0) & arr[0](10) > arr[2] 5 -> no more pop
        *   3. st is not empty, storing: 2 - 0(i - st.top()) to result vector
        *   4. Adding position '2' to st
        * 
        *   Loop 3 (i = 3, arr[3] = 90):
        *   1. st is not empty(storing: 2, 0) & arr[2](5) < arr[3](90) -> pop top '2'
        *   2. st is not empty(storing: 0) & arr[0](10) < arr[3](90) - > pop top '0'
        *   3. st is empty, storing: 3 + 1(i + 1) to the result vector
        *   4. Adding position '3' to st
        * 
        *   Loop 4 (i = 4,  arr[4] = 120):
        *   1. st is not empty(storing: 3) & arr[3](90) < arr[4](120) -> pop top '3'
        *   2. st is empty, storing: 4 + 1(i + 1) to the result vector
        *   3. Adding position '4' to st
        * 
        *   Loop 5 (i = 5, arr[5] = 80):
        *   1. st is not empty(storing: 4) & arr[4](120) > arr[5](80) -> no more pop
        *   2. st is not empty, storing 5 - 4(i - st.top()) to result vector
        *   3. Adding position '5' to st
        * 
        *   End of the loop
        *   Returning the result vector [1, 1, 2, 4, 5, 1]
        */ 
        ret.push_back((st.empty()) ? (i + 1) : (i - st.top()));
        st.push(i); // Add current stick position to st
    }

    return ret;
}

int main()
{
    system("cls");
    const unsigned short testcase = 3;

    switch (testcase)
    {
        case 1:
        {
            {
                // Solve example 1 using vector only approach
                std::vector<int> stick{ 100,80,60,70,60,75,85 };
                std::vector<int> test = stickSpan(stick);

                for (const auto& x : test)
                {
                    std::cout << x;
                    if (&x != &test.back()) std::cout << "-";
                    if (&x == &test.back()) std::cout << std::endl;
                }
            }
            break;
        }

        case 2:
        {
            {
                // Solve example 2 using vector only approach
                std::vector<int> stick{ 10,4,5,90,120,80 };
                std::vector<int> test = stickSpan(stick);

                for (const auto& x : test)
                {
                    std::cout << x;
                    if (&x != &test.back()) std::cout << "-";
                    if (&x == &test.back()) std::cout << std::endl;
                }
            }
            break;
        }

        case 3:
        {
            {
                // Solve example 1 using stack approach
                std::vector<int> stick{ 100,80,60,70,60,75,85 };
                std::vector<int> test = stickSpan_S(stick);

                for (const auto& x : test)
                {
                    std::cout << x;
                    if (&x != &test.back()) std::cout << "-";
                    if (&x == &test.back()) std::cout << std::endl;
                }
            }
            break;
        }

        case 4:
        {
            {
                // Solve example 2 using stack approach
                std::vector<int> stick{ 10,4,5,90,120,80 };
                std::vector<int> test = stickSpan_S(stick);

                for (const auto& x : test)
                {
                    std::cout << x;
                    if (&x != &test.back()) std::cout << "-";
                    if (&x == &test.back()) std::cout << std::endl;
                }
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