#include "../include/Row.hpp"

Row::Row ()
{
    for (uint8_t i = 0; i < 9; i++) {
        row[i] = '-';
    }
}