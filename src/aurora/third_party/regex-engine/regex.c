/* regex-engine, licensed under the GNU General Public License version 2 */
#include <string.h>

int regex_match(const char *pattern, const char *text)
{
    if (*pattern == '\0') {
        return *text == '\0';
    }
    if (*pattern == '.') {
        return *text != '\0' && regex_match(pattern + 1, text + 1);
    }
    return *pattern == *text && regex_match(pattern + 1, text + 1);
}
