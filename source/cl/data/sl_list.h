#pragma once
#include <cl/types.h>

template <typename type_t>
struct sl_item_t {
    type_t data;
    sl_item_t<type_t>* next;
};

template <typename type_t>
struct sl_list_t {
    sl_item_t<type_t>* first;
    sl_item_t<type_t>* last;
    usize size;
};

template <typename type_t>
void sl_list_new(sl_list_t<type_t>& list) {
    list->first = nullptr;
    list->last = nullptr;
    list->size = 0;
}

template <typename type_t>
void sl_list_del(sl_list_t<type_t>& list) {
    if (list.size == 0) {
        return;
    }

    sl_item_t<type_t>* curr = list.first;

    while (curr != nullptr) {
        sl_item_t<type_t>* temp = curr;
        curr = curr->next;
        delete temp;
    }

    list.first = nullptr;
    list.last = nullptr;
    list.size = 0;
}

template <typename type_t>
void sl_list_push(sl_list_t<type_t>& list, const type_t& data) {
    sl_item_t<type_t>* item = new sl_item_t<type_t>();
    item->data = data;
    item->next = nullptr;

    if (list.size == 0) {
        list.first = item;
        list.last = item;
        list.size = 1;
    } else {
        list.last->next = item;
        list.last = item;
        list.size += 1;
    }
}

template <typename type_t>
void sl_list_pop(sl_list_t<type_t>& list) {
    if (list.size == 0) {
        return;
    }

    if (list.size == 1) {
        delete list.first;
        list.first = nullptr;
        list.last = nullptr;
        list.size = 0;
    } else {
        sl_item_t<type_t>* prev = list.first;

        while (prev->next != list.last && prev != nullptr) {
            prev = prev->next;
        }

        prev->next = nullptr;

        delete list.last;
        list.last = prev;
        list.size -= 1;
    }
}

template <typename type_t>
sl_item_t<type_t>* sl_list_at(sl_list_t<type_t>& list, usize i) {
    if (list.size == 0 || list.size <= i) {
        return nullptr;
    }

    sl_item_t<type_t>* curr = list.first;
    usize index = 0;

    while (index != i && curr != nullptr) {
        curr = curr->next;
        index += 1;
    }

    return curr;
}

template <typename type_t>
sl_item_t<type_t>* sl_list_at(sl_list_t<type_t>& list, usize i) {
    return sl_list_at(*this, i);
}
