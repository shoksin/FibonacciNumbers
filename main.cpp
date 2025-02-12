#include <iostream>
#include <vector>

std::vector<int> fibonacci(int n) {
    std::vector<int> sequence;
    if (n <= 0) {
        return sequence;
    }

    sequence.push_back(0);
    if (n == 1) {
        return sequence;
    }

    sequence.push_back(1);
    for (int i = 2; i < n; ++i) {
        sequence.push_back(sequence[i-1] + sequence[i-2]);
    }

    return sequence;
}

int main() {
    int n;
    std::cout << "Enter the number of Fibonacci sequence numbers: ";
    std::cin >> n;

    std::vector<int> fibSequence = fibonacci(n);

    std::cout << "The first " << n << " numbers of the Fibonacci sequence: ";
    for (int i = 0; i < fibSequence.size(); ++i) {
        std::cout << fibSequence[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}