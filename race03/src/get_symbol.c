#include "../inc/header.h"

wchar_t get_symbol() {
    wchar_t *symbol = L"゠ァアィイゥウェエォオカガキクグケゲコサザシズセゼソゾタダチヂッツヅテデトドナニヌネノハバパヒフヘベペホボマミムメモャヤュユョヨラリルレロヮワヰヱヲンヴヵヶヷヸヹヺ・ーヽヾヿ";

	return symbol[rand() % 86];
}
