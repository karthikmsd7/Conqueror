<h2><a href="https://github.com/mahendragandham/Conqueror/blob/main/src/lib/start.S">Start.S</a></h2>
<ul>
    <li>Let's start with global _start:</li>
    <li>we need to call main function</li>
</ul>
<p>As we are using x86_64 Assembly Programming Language, there is a little bit difference in syntax. We must use x86_64 Assembly Syntax to this because all the code is written in those Varient.</p>
<pre>
global _start:
.text
_start:
    call main
</pre>
<p>In the above code we have called the main function from /src/init/init.c file</p>
<ul>
<li>Step 2: let's build _syscall: function</li>
<li>Now, move Quadword instruction %rax to %rdi register</li>
<li>After, move the instructions from %rdi register to %rsi register</li>
<li>Next, move the register %rsi to %rdx regsiter</li>
<li>Next, move the register %rdx to %rcx register</li>
<li>.</li>
<li>.</li>
<li>After that, call the syscall function and return that</li>
</ul>
<pre>
_syscall:
    movq %rdi, %rax
    movq %rsi, %rdi
    movq %rdx, %rsi
    movq %rcx, %rdx
    movq %r8, %r10
    movq %r9. %r8
    movq 8(%rsp), %r9
    syscall 
    ret
</pre>