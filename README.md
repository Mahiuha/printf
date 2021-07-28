<h1 class="gap">0x11. C - printf.</h1>

<p>Write your own <code>printf</code> function.</p>

![Screenshot from 2021-07-26 23-05-46](https://user-images.githubusercontent.com/35099243/127051875-7907e6f5-6c5d-4c03-9a2c-84aae2954f66.png)

<h2><strong>Description</strong></h2>

<p>The <strong>printf project </strong>was made by <a href="https://github.com/Mahiuha">Joseph Mahiuha</a> and <a href="https://github.com/Hezbon12">Hezbon Oduol</a>. Students of <a href="https://www.alxafrica.com/"> ALX</a> For this project we have some instruction that you will see in this README.</p> 

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/lQ4Ecz5ZX_H3fk2qhKO-RA" title="Secrets of printf" target="_blank">Secrets of printf</a> </li>
<li><a href="/rltoken/K5q7wmUvcQcDMsyziDqu6Q" title="Group Projects" target="_blank">Group Projects</a> (<em>Don&rsquo;t forget to read this</em>)</li>
<li><a href="/rltoken/92Ppxs-a3NM0H8bwLdH6PA" title="Flowcharts" target="_blank">Flowcharts</a></li>
</ul>

<p><strong>man or help</strong>:</p>

<ul>
<li><code>printf (3)</code></li>
</ul>

<ul>
<li>Your code will be compiled this way:</li>
</ul>

<pre><code>$ gcc -Wall -Werror -Wextra -pedantic *.c
</code></pre>

<h4 class="task">
0. I&#39;m not going anywhere. You can print that wherever you want to. I&#39;m here and I&#39;m a Spur for life
<span class="alert alert-warning mandatory-optional">
mandatory
</span>
</h4>
<p>Write a function that produces output according to a format.</p>
<ul>
<li><code>c</code></li>
<li><code>s</code></li>
<li><code>%</code></li>
</ul></li>
<li>You don&rsquo;t have to reproduce the buffer handling of the C library <code>printf</code> function</li>
<li>You don&rsquo;t have to handle the flag characters</li>
<li>You don&rsquo;t have to handle field width</li>
<li>You don&rsquo;t have to handle precision</li>
<li>You don&rsquo;t have to handle the length modifiers</li>
</ul>


<h4 class="task">
1. Education is when you read the fine print. Experience is what you get ifyou don&#39;t
<span class="alert alert-warning mandatory-optional">
mandatory
</span>
</h4>
<p>Handle the following conversion specifiers:</p>

<ul>
<li><code>d</code></li>
<li><code>i</code></li>
<li>You don&rsquo;t have to handle the flag characters</li>
<li>You don&rsquo;t have to handle field width</li>
<li>You don&rsquo;t have to handle precision</li>
<li>You don&rsquo;t have to handle the length modifiers</li>
</ul>


<h4 class="task">
2. Just because it&#39;s in print doesn&#39;t mean it&#39;s the gospel
<span class="alert alert-warning mandatory-optional">
mandatory
</span>
</h4>
<p>Create a man page for your function.</p>

<h4 class="task">
ADVANCED TASKS
3. With a face like mine, I do better in print
<span class="alert alert-info mandatory-optional">
#advanced
</span>
</h4>
<p>Handle the following custom conversion specifiers:</p>

<ul>
<li><code>b</code>: the unsigned int argument is converted to binary</li>
</ul>

<h4 class="task">
4. What one has not experienced, one will never understand in print
<span class="alert alert-info mandatory-optional">
#advanced
</span>
</h4>

<p>Handle the following conversion specifiers:</p>

<ul>
<li><code>u</code></li>
<li><code>o</code></li>
<li><code>x</code></li>
<li><code>X</code></li>
<li>You don&rsquo;t have to handle the flag characters</li>
<li>You don&rsquo;t have to handle field width</li>
<li>You don&rsquo;t have to handle precision</li>
<li>You don&rsquo;t have to handle the length modifiers</li>
</ul>

<h4 class="task">
5. Nothing in fine print is ever good news
<span class="alert alert-info mandatory-optional">
#advanced
</span>
</h4>
<p>Use a local buffer of 1024 chars in order to call <code>write</code> as little as possible.</p>

<h4 class="task">
7. My weakness is wearing too much leopard print
<span class="alert alert-info mandatory-optional">
#advanced
</span>
</h4>
  
<p>Handle the following custom conversion specifier:</p>

<h4 class="task">
6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
<span class="alert alert-info mandatory-optional">
#advanced
</span>
</h4>

<p>Handle the following conversion specifier: <code>p</code>.</p>

<ul>
<li>You don&rsquo;t have to handle the flag characters</li>
<li>You don&rsquo;t have to handle field width</li>
<li>You don&rsquo;t have to handle precision</li>
<li>You don&rsquo;t have to handle the length modifiers</li>
</ul>

<h4 class="task">
8. The big print gives and the small print takes away
<span class="alert alert-info mandatory-optional">
#advanced
</span>
</h4>

<p>Handle the following flag characters for non-custom conversion specifiers:</p>

<ul>
<li><code>+</code></li>
<li>space</li>
<li><code>#</code></li>
</ul>

<h4 class="task">
9. Sarcasm is lost in print
<span class="alert alert-info mandatory-optional">
#advanced
</span>
</h4>

<p>Handle the following length modifiers for non-custom conversion specifiers:</p>

<ul>
<li><code>l</code></li>
<li><code>h</code></li>
</ul>

<p>Conversion specifiers to handle: <code>d</code>, <code>i</code>, <code>u</code>, <code>o</code>, <code>x</code>, <code>X</code></p>

<h4 class="task">
10. Print some money and give it to us for the rain forests
<span class="alert alert-info mandatory-optional">
#advanced
</span>
</h4>

<p>Handle the field width for non-custom conversion specifiers.</p>

<h4 class="task">
11. The negative is the equivalent of the composer&#39;s score, and the print the performance
<span class="alert alert-info mandatory-optional">
#advanced
</span>
</h4>

<p>Handle the precision for non-custom conversion specifiers.</p>

<h4 class="task">
12. It&#39;s depressing when you&#39;re still around and your albums are out of print
<span class="alert alert-info mandatory-optional">
#advanced
</span>
</h4>

<p>Handle the <code>0</code> flag character for non-custom conversion specifiers.</p>

<h4 class="task">
13. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
<span class="alert alert-info mandatory-optional">
#advanced
</span>
</h4>
<p>Handle the <code>-</code> flag character for non-custom conversion specifiers.</p>

<h4 class="task">
14. Print is the sharpest and the strongest weapon of our party
<span class="alert alert-info mandatory-optional">
#advanced
</span>
</h4>

<p>Handle the following custom conversion specifier:</p>

<ul>
<li><code>r</code> : prints the reversed string</li>
</ul>

<h4 class="task">
15. The flood of print has turned reading into a process of gulping rather than savoring
<span class="alert alert-info mandatory-optional">
#advanced
</span>
</h4>

<p>Handle the following custom conversion specifier:</p>

<ul>
<li><code>R</code>: prints the rot13&#39;ed string</li>
</ul>

<h4 class="task">
16. *
<span class="alert alert-info mandatory-optional">
#advanced
</span>
</h4>

<p>All the above options work well together.</p>


# Authors.

**Joseph Mahiuha** and **Hezbon Oduor.**
