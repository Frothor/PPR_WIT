# 6 Iteratory

## 6.2.9 Min Element: Element najmniejszy - bitcoin

Napisz funkcję **min_element**, która przyjmuje początkowy oraz końcowy iterator wycinka wektora liczb
całkowitych i zwraca iterator najmniejszego elementu tego wycinka. Jeżeli takich elementów jest kilka,
funkcja zwraca iterator pierwszego z nich. Jeżeli taki element nie istnieje, funkcja zwraca końcowy iterator
wycinka. Napisz analogiczną funkcję **min_element** przyjmującą i zwracającą iteratory niemodyfikujące.
Funkcje powinny być przystosowane do użycia w przykładowym programie poniżej. Funkcje nie używają
indeksów i korzystają tylko z pliku nagłówkowego **vector**.

### Przykładowy program
```
int main() {
std::vector<int> vector {7, 5, 1, 12, 8};
std::vector<int>::iterator result1 = min_element(vector.begin(), vector.end());
std::vector<int>::const_iterator result2 = min_element(vector.cbegin(), vector.cend());
std::cout << result1 - vector.begin() << " "
<< result2 - vector.cbegin() << std::endl; }
```

### Wykonanie
```
Out: 2 2
```

## 6.2.10 Partial Sum: Sumy częściowe - bitcoin

Napisz funkcję **partial_sum**, która przyjmuje niemodyfikujący iterator początkowy i końcowy wycinka
wektora liczb całkowitych oraz iterator początkowy innego wycinka i do każdej *n*- tej komórki drugiego
wycinka wpisuje sumę pierwszych n elementów pierwszego. Funkcja powinna być przystosowana do użycia
w przykładowym programie poniżej. Funkcja nie używa indeksów i korzysta tylko z pliku nagłówkowego
**vector**.

### Przykładowy program
```
int main() {
std::vector<int> vector {3, 2, -1, 3, 4};
auto result = partial_sum(vector.cbegin(), vector.cend(), vector.begin());
for (auto iterator = vector.cbegin(); iterator < result;) {
std::cout << *iterator++ << " "; }
std::cout << std::endl; }
```

### Wykonanie
```
Out: 3 5 4 7 11
```