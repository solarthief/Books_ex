#include <iostream>


void print_vector( int* vector, unsigned int limit ) {
	for (int i = 0; i < limit; i++) {
		std::cout << vector[i]<<" ";
	}

}

static const int N = 10000;

int main() {
	int i, p, q, id[N];
	for (i = 0; i<N; i++) {
		id[i] = i;
	}
	while (std::cin >> p >> q) {
		int t = id[p];
		if (t == id[q]) continue;
		for (i = 0; i < N; i++) {
			if (id[i] == t) id[i] = id[q];
		}
		std::cout << " " << p << " " << q << " | ";
		print_vector(id,10);
		std::cout << std::endl;
		
	}
}