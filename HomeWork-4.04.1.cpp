#include <iostream>
#include "List.h"
#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_session.hpp>

TEST_CASE("List", "[List]") {
    List l;
    SECTION("Empty") {
        SECTION("Empty 1")
        {
            INFO("Поветка что список пустой");
            CHECK(l.Empty() == true);
        }
        l.PushFront(1);
        SECTION("Empty 2")
        {
            INFO("Проверка что список не пустой");
            CHECK(l.Empty() == false);
        }
    }
    l.PushFront(1);
    SECTION("Size") {
        SECTION("Size 1")
        {
            INFO("Проверка наличия 1 элемента");
            CHECK(l.Size() == 1);
        }
        l.PushBack(2);
        SECTION("Size 2")
        {
            INFO("Проверка наличия 2х элементов");
            CHECK(l.Size() == 2);
        }
    }
    SECTION("Clear") {
        SECTION("Clear 1")
        {
            INFO("Проверка перед отчиской что список не пуст");
            CHECK(l.Empty() == false);
        }
        l.Clear();
        SECTION("Clear 2")
        {
            INFO("Проверка что отчистка прошла успешно");
            CHECK(l.Size() == 0);
        }
    }
}

int main()
{
    List l;
    setlocale(LC_ALL, "Russian");
    return Catch::Session().run();
}