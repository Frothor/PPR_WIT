# 1 Funkcje

## 1.2.6 Shop: Godziny otwarcia sklepu - bitcoin

Pewien sklep jest czynny od 10:30 włącznie do 18:30 wyłącznie. Napisz program shop, który wczytuje
ze standardowego wejścia godzinę i minuty, na przykład 11 45 dla 11:45, i wypisuje na standardowe
wyjście true, jeśli sklep jest wtedy otwarty, albo false jeśli jest zamknięty. Program załącza tylko plik
nagłówkowy iostream.

### Przykładowe wykonanie
```
In: 11 45
Out: true
```
*Uwaga* Spróbuj napisać program bez użycia instrukcji wyboru, instrukcji warunkowej, ani operatora
warunkowego.

## 1.2.16 Leap: Rok przestępny - bitcoin

Według kalendarza gregoriańskiego przestępne są lata podzielne przez 4 z wyjątkiem lat podzielnych
przez 100 ale niepodzielnych przez 400. Napisz funkcję leap, która przyjmuje rok i zwraca prawdę jeśli
jest on przestępny albo fałsz w przeciwnym razie. Funkcja powinna być przystosowana do użycia w
przykładowym programie poniżej. Funkcja nie korzysta z żadnych plików nagłówkowych.

### Przykładowy program
```c++
int main() {
std::cout << std::boolalpha << leap(2000) << std::endl; }
```
### Wykonanie
```
Out: true
```
*Uwaga* Spróbuj napisać funkcję bez użycia instrukcji wyboru, instrukcji warunkowej, ani operatora wa-
runkowego.

## 1.2.18 Lesser: Mniejsza z dwóch liczb - bitcoin

Napisz funkcję lesser, która przyjmuje dwie liczby rzeczywiste i zwraca mniejszą z nich. Funkcja powinna
być przystosowana do użycia w przykładowym programie poniżej. Funkcja nie korzysta z żadnych plików
nagłówkowych.

### Przykładowy program
```c++
int main() {
std::cout << lesser(3.12, 2.13) << std::endl; }
```
### Wykonanie
```
Out: 2.13
```
*Uwaga* Spróbuj napisać funkcję bez użycia instrukcji warunkowej.