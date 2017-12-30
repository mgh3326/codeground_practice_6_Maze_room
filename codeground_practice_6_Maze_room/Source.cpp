#define _CRT_SECURE_NO_WARNINGS
/*
You should use the statndard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful.
*/

#include <iostream>
#include <vector>
#include <stdio.h>
//#include <algorithm>
//#include <math.h>
using namespace std;

unsigned int Answer;

int main(int argc, char** argv)
{
	int T, test_case;
	int num;
	//unsigned int study;
	/*
	The freopen function below opens input.txt file in read only mode, and afterward,
	the program will read from input.txt file instead of standard(keyboard) input.
	To test your program, you may save input data in input.txt file,
	and use freopen function to read from the file when using cin function.
	You may remove the comment symbols(//) in the below statement and use it.
	Use #include<cstdio> or #include <stdio.h> to use the function in your program.
	But before submission, you must remove the freopen function or rewrite comment symbols(//).
	*/

	//freopen("input.txt", "r", stdin);
	setbuf(stdout, NULL);
	//cin >> T;
	scanf("%d", &T);
	for (test_case = 0; test_case < T; test_case++)
	{
		int N, num;
		scanf("%d", &N);
		scanf("%d", &num);
		vector<char> v(num);
		Answer = 1;
		for (int i = 0; i < num; i++)
		{
			scanf("%d", &v[i]);
		}


		/////////////////////////////////////////////////////////////////////////////////////////////
		/*
		Implement your algorithm here.
		The answer to the case will be stored in variable Answer.
		*/
		/////////////////////////////////////////////////////////////////////////////////////////////

		// Print the answer to standard output(screen).
		/*cout << "Case #" << test_case + 1 << endl;
		cout << Answer% 1000000007<< endl;*/
		printf("Case #%d\n", test_case + 1);
		printf("%d\n", Answer % 1000000007);
	}

	return 0;//Your program should return 0 on normal termination.
}