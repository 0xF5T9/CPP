/*
*	Debug Project
*/

#include "C:\Users\novar\Documents\GitHub\CPP\Codelearn\22.Tests\Group (Practice 10)\func.h"

int main()
{
	system("cls"); // Clear Vscode Terminal

	{
		// Create vectors that contains 'People' objects
		std::vector<People> ps_1 = {
		People("Nguyen Cao Minh", GetRandInt(), "Plasterer", "253-43-5547"),
		People("Nguyen Hoang Khai", GetRandInt(), "", "405-50-6208"),
		People("Nguyen Gia Hung", GetRandInt(), "Doctor", "543-66-1373"),
		People("Nguyen Quoc Toan", GetRandInt(), "Surgeon", "049-54-7186"),
		People("Nguyen Phuong Vy", GetRandInt(), "", "049-54-7186"),
		People("Nguyen Viet Que", GetRandInt(), "Historian", "262-05-0011")
		};
		std::vector<People> ps_2 = {
		People("Tran Phuong Dung", GetRandInt(), "", "398-84-2011"),
		People("Tran Phuong Lan", GetRandInt(), "Building labourer", "117-64-5540"),
		People("Tran Trong Cung", GetRandInt(), "Plumber", "477-09-3218"),
		People("Tran Gia Moc", GetRandInt(), "", "491-48-8152"),
		People("Tran Minnh Dat", GetRandInt(), "Childcare worker", "103-30-6049"),
		People("Tran Thanh Nhan", GetRandInt(), "", "427-99-7996")
		};

		// Create vector that contains 'Family' objects
		std::vector<Family> fs = {
			Family("Nguyen", "poor", "37 Ta Hien Street", ps_1),
			Family("Tran", "rich", "45 Hai Thuong Lan Ong Street", ps_2)
		};

		// Create 'Group' object
		Group gs("Group 1", fs);

		ShowVectorElements(gs, "<Group 1 Info>");
		Group::avgAgeGroup(gs, 1, 1);

		std::vector<People> pwj = Group::getPeopleHaveNotJob(gs);
		ShowVectorElements(pwj, "<Peoples without job (Group 1)>");
	}	// End of the scope, the vectors: 'ps_1', 'ps_2', 'fs, 'gs', 'pwj' will be destroyed
	
	return 0;
}