#include &lt;stdio.h&gt;
/**
* main - prints the alphabet in lowercase, and then in uppercase,
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
int ch;
for (ch = &#39;a&#39;; ch &lt;= &#39;z&#39;; ch++)
putchar(ch);
for (ch = &#39;A&#39;; ch &lt;= &#39;Z&#39;; ch++)
putchar(ch);
putchar(&#39;\n&#39;);
return (0);
}
