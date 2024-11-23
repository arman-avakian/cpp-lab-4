Федеральное государственное автономное образовательной учреждение

высшего образования

**НАЦИОНАЛЬНЫЙ ИССЛЕДОВАТЕЛЬСКИЙ УНИВЕРСИТЕТ**

**«ВЫСШАЯ ШКОЛА ЭКОНОМИКИ»**

**Московский институт электроники и математики имени А. Н. Тихонова**

## Лабораторная работа №4  
**Комплексный суп**  
по дисциплине "Языки программирования"  

**Студент группы СКБ241**: Авакян Арман Арменович
**Преподаватель**: Рогачёва Ольга Алексеевна  

---

## Описание программы

Программа реализует решение задачи разделения супа, описанной в лабораторной работе. Необходимо определить, возможно ли разделить суп (граммы в мисках) поровну между двумя студентами. В случае успешного разделения программа выводит детали распределения масс мисок.

---

## Формулировка задачи

Маша и Петя договорились поделить суп (граммы) из набора мисок так, чтобы каждая масса была уникальной. Программа проверяет возможность равного деления и, если это возможно, предоставляет план распределения.

**Формат входных данных**  
- Целое число `n` (1 ≤ n ≤ 10⁹) — количество граммов супа.  

**Формат выходных данных**  
- Если распределение невозможно: `NO`.  
- Если возможно:  
  1. `YES`.  
  2. Количество мисок у Пети и их массы.  
  3. Количество мисок у Маши и их массы.  

---

## Структура программы

Программа реализована на языке C++ и состоит из следующих компонентов:

- **Основная логика (`splitSoup`)**  
  Проверяет делимость `n` на 2 и, если возможно, формирует две группы порций (одна для Маши, другая для Пети).  

- **Тестирование (`runTests`)**  
  Содержит встроенные тесты для проверки корректности программы.  

- **Интерактивный ввод (`main`)**  
  Позволяет пользователю ввести значение `n` и получить результат.  

---

## Пример работы программы

### Тестовые данные:
- Ввод: `6`  
  Вывод:  
YES 3 1 2 3 3 4 5 6

- Ввод: `7`  
Вывод:  
NO

---

## Возможности программы

- Быстрое решение задачи для любого значения `n` (в пределах заданных ограничений).  
- Простота использования: программа автоматически разделяет порции и выводит результат.  
- Тестирование встроено для проверки корректности алгоритма.

---

### Заключение

Лабораторная работа демонстрирует навыки работы с алгоритмами на C++, включая распределение ресурсов, оптимизацию, ввод/вывод данных и тестирование. Программа эффективна для решения задачи в реальных временных ограничениях. 
