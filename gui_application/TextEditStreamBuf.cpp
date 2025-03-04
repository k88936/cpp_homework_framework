//
// Created by root on 3/4/25.
//

#include "TextEditStreamBuf.h"

int TextEditStreamBuf::overflow(int c) {
    if (c != EOF)
    {
        QChar ch(static_cast<QChar::SpecialCharacter>(c));
        QString text(ch);
        textEdit->insertPlainText(text);
    }
    return c;
}
