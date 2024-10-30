# Automatic Variables in Makefile
### There few automatic varibale ins makefile and very useful
To understand automatic variables, please create three files main.c, pluse.c and minus.c
~~~
$@: The file name of the target of the rule.
~~~

~~~
$%: The target member name, when the target is an archive member.
- For example, if the target is foo.a(bar.o) then ‘$%’ is bar.o and ‘$@’ is foo.a. ‘$%’ is empty when the target is not an archive member.
~~~

~~~
$<: The name of the first prerequisite.
~~~

~~~
$?: The names of all the prerequisites that are newer than the target, with spaces between them.
~~~

~~~
$^: The names of all the prerequisites, with spaces between them. For prerequisites which are archive members, only the named member is used.
~~~

~~~
$+: This is like ‘$^’, but prerequisites listed more than once are duplicated in the order they were listed in the makefile.
~~~

~~~
$|: The names of all the order-only prerequisites, with spaces between them.
~~~

~~~
$*: The stem with which an implicit rule matches.
~~~