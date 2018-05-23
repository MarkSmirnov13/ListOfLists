# Список списков 

Двусвязный циклический список вложенных подсписков (элементы двусвязного списка - это вложенные подсписки разных типов). Ключ вложенного списка - строка, у верховного списка ключа нет; он хранит только тип). 

Доступные операции:
1. Добавление нового элемента в корневой список  
2. Удалять из корневого (с подсписком)
3. Добавление элемента подсписка
4. Удаление всех элементов подсписка "delete pos "- оно же deleteall: удаление всего вложенного списка, где  pos - это значение элемента корневого списка (уникальность поддерживается)
5. Добавление подсписка в уже существующий путём добавления нескольких элементов сразу
    
Входной файл состоит из набора команд:
- "insertIn" position type - вставка узла-списка с типом по позиции
- "insertInTo" pos_up pos_sub key – вставка элемента в узел по позиции в верхнем и нижнем списках
- "insertListInTo" pos_up pos_sub n keys(n) – вставка n элементов в уже существующий список по позициям в верхнем и нижнем списках
- "delete" pos - оно же deleteall: удаление всего вложенного (под)списка
- "deleteFrom" pos_up pos_sub – удаление одного элемента по позиции
- "print" - красивый вывод всего списка в формате

1->4<->8<->8..

2->1->3->..

3->0->2

4->2<->4<->8<->5

где 1 список – циклический двусвязный, 2 – циклический односвязный, 3 – односвязный, 4 – двусвязный.