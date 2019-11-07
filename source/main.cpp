#include"list.h"
#include"stack.h"
#include"queue.h"
void print_point(POINT p){
	cout << p.x << "," << p.y << endl;
}
void input_point(POINT &p){
	cout << "x: "; cin >> p.x;
	cout << "y: "; cin >> p.y;
}
void run(){
	POINT p;
	int N = 0;

	LIST list;
	Init_list(list);

	STACK stack;
	Init_stack(stack);

	QUEUE queue;
	Init_q(queue);

	int key;
	do{
		cout << "0.Exit" << endl;
		cout << "Linked list:" << endl;
		cout << "	1.Prepend" << endl;
		cout << "	2.append" << endl;
		cout << "	3.Print linked list" << endl;
		cout << "	4.Get value at i" << endl;

		cout << "Stack:" << endl;
		cout << "	5.Pop stack" << endl;
		cout << "	6.Push stack" << endl;
		cout << "	7.Print stack" << endl;

		cout << "Queue:" << endl;
		cout << "	8.Dequeue" << endl;
		cout << "	9.Enqueue" << endl;
		cout << "	10.Print queue" << endl;
		cout << "	11.Quick sort" << endl;

		cout << "Enter number to run task: "; cin >> key;
		if (key == 0){
			return;
		}

		if (key == 1){
			system("cls");
			do{
				cout << "Enter number of point you want to prepend into list: "; cin >> N;
				if (N != 0) break;
				else cout << "Namber of point must be >0!" << endl;
			} while (1);

			for (int i = 1; i <= N; i++){
				input_point(p);
				prepend_list(list, p);
				system("cls");
			}

			cout << "Prepend success!" << "\n" << "Press \"Enter\" to continue other task!" << endl; getchar(); getchar();;
			system("cls");
			continue;
		}

		if (key == 2){
			system("cls");

			do{
				cout << "Enter number of point you want to append into list: "; cin >> N;
				if (N != 0) break;
				else cout << "Namber of point must be >0!" << endl;
			} while (1);

			for (int i = 1; i <= N; i++){
				input_point(p);
				append_list(list, p);
				system("cls");
			}

			cout << "Append success!" << "\n" << "Press \"Enter\" to continue other task!" << endl; getchar(); getchar();;
			system("cls");
			continue;
		}

		if (key == 3){

			if (list.size == 0){
				cout << "List is empty! please input data into list" << endl << endl;
				cout << "Press \"Enter\" to continue other task!" << endl; getchar(); getchar();
				system("cls");
				continue;
			}
			else{
				system("cls");
				print_list(list);
			}

			cout << "Press \"Enter\" to continue other task!" << endl; getchar(); getchar();;
			system("cls");
			continue;
		}

		if (key == 4){
			if (list.size == 0){
				cout << "List is empty! please input data into list" << endl << endl;
				cout << "Press \"Enter\" to continue other task!" << endl; getchar(); getchar();
				system("cls");
				continue;
			}
			else{
				system("cls");
				int index = 0;
				cout << "Size of linked list is " << list.size << "\n" << "Enter index of element to get value out from list: "; cin >> index;
				POINT pGet = get_value(list, index);
				cout << "Value of point has been taken out -> ";
				print_point(pGet);
				cout << "\nGetting value success!" << "\n" << "Press \"Enter\" to continue other task!" << endl; getchar(); getchar();;
				system("cls");
				continue;
			}

		}

		if (key == 5){
			if (stack.size == 0){
				cout << "Stack is empty! please input data into stack" << endl << endl;
				cout << "Press \"Enter\" to continue other task!" << endl; getchar(); getchar();
				system("cls");
				continue;
			}
			else{
				system("cls");
				POINT pPopStack = pop_stack(stack);
				cout << "Value of point has been taken out from stack -> ";
				print_point(pPopStack);
				cout << "\nPopping value success!" << "\n" << "Press \"Enter\" to continue other task!" << endl; getchar(); getchar();
				system("cls");
				continue;
			}

		}


		if (key == 6){
			system("cls");

			do{
				cout << "Enter number of point you want to push into stack: "; cin >> N;
				if (N != 0) break;
				else cout << "Namber of point must be >0!" << endl;
			} while (1);

			for (int i = 1; i <= N; i++){
				input_point(p);
				push_stack(stack, p);
				system("cls");
			}
			cout << "\nPushing value success!" << "\n" << "Press \"Enter\" to continue other task!" << endl; getchar(); getchar();;
			system("cls");
			continue;
		}


		if (key == 7){

			if (stack.size == 0){
				cout << "Stack is empty! please input data into stack" << endl << endl;
				cout << "Press \"Enter\" to continue other task!" << endl; getchar(); getchar();
				system("cls");
				continue;
			}
			else{
				system("cls");
				print_stack(stack);
			}
			cout << "Press \"Enter\" to continue other task!" << endl; getchar(); getchar();;
			system("cls");
			continue;
		}

		if (key == 8){
			if (queue.size == 0){
				cout << "Queue is empty! please input data into queue" << endl << endl;
				cout << "Press \"Enter\" to continue other task!" << endl; getchar(); getchar();
				system("cls");
				continue;
			}
			else{
				system("cls");
				POINT pDeQueue = dequeue(queue);
				cout << "Value of point has been taken out from queue -> ";
				print_point(pDeQueue);
				cout << "\nDequeue value success!" << "\n" << "Press \"Enter\" to continue other task!" << endl; getchar(); getchar();
				system("cls");
				continue;
			}

		}

		/*
		key 9 Enqueue
		*/
		if (key == 9){
			system("cls");

			do{
				cout << "Enter number of point you want to enqueue into queue: "; cin >> N;
				if (N != 0) break;
				else cout << "Namber of point must be >0!" << endl;
			} while (1);

			for (int i = 1; i <= N; i++){
				input_point(p);
				enqueue(queue, p);
				system("cls");
			}
			cout << "\nEnqueue value success!" << "\n" << "Press \"Enter\" to continue other task!" << endl; getchar(); getchar();;
			system("cls");
			continue;
		}
		/*
		key 7 print stack
		*/
		if (key == 10){

			if (queue.size == 0){
				cout << "Queue is empty! please input data into queue" << endl << endl;
				cout << "Press \"Enter\" to continue other task!" << endl; getchar(); getchar();
				system("cls");
				continue;
			}
			else{
				system("cls");
				print_queue(queue);
			}
			cout << "Press \"Enter\" to continue other task!" << endl; getchar(); getchar();;
			system("cls");
			continue;
		}
		if (key == 11){
			system("cls");
			int size = 0;
			int arr[100];
			cout << "Enter N of array:"; cin >> size;
			for (int i = 0; i < size; i++){
				cout << "array[" << i + 1 << "]: "; cin >> arr[i];
			}

			cout << "Before do quick sort array is:" << endl;
			for (int i = 0; i < size; i++){
				cout << arr[i] << "\t";
			}
			cout << "\nAfter do quick sort array is:" << endl;
			quick_sort(arr,size - 1, compar);
			for (int i = 0; i < size; i++){
				cout << arr[i] << "\t";
			}
			cout << "\nPress \"Enter\" to continue other task!" << endl; getchar(); getchar();;
			system("cls");
			continue;
		}
	} while (1);

}
void main(){
	run();
}