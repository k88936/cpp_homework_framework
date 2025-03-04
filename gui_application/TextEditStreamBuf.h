//
// Created by root on 3/4/25.
//

#ifndef HOMEWORK_TEXTEDITSTREAMBUF_H
#define HOMEWORK_TEXTEDITSTREAMBUF_H


#include <streambuf>
#include <QTextEdit>

class TextEditStreamBuf : public std::streambuf
{
public:
    explicit TextEditStreamBuf(QTextEdit* text_edit)
        : textEdit(text_edit)
    {
    }
protected:
    int_type overflow(int_type c) override;
private:
    QTextEdit* textEdit;
};


#endif //HOMEWORK_TEXTEDITSTREAMBUF_H
