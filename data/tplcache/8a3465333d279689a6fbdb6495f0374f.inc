<div class="about"><img style="float:left; margin-right:31px;" src="/skin/img/about.jpg">
      <div class="bt"><img src="/skin/img/aboutbt.png"><span>{dede:field name='typename'/}</span>
        <p>{dede:field name='typenameen'/}</p>
      </div>
      <p class="about_p">&nbsp;&nbsp;&nbsp;&nbsp;{dede:sql sql='Select content from dede_arctype where id=19'}[field:content function='cn_substr(html2text(@me),460)'/] {/dede:sql} ...【<font color="#00afdc" style="font-weight:bold"><a href="{dede:field name='typeurl'/}">查看更多</a></font>】</p>
    </div>