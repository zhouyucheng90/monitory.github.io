<section class="widget widget-textblock ">
    <div class="widget-header">
      <h2>{dede:field name='typename'/}</h2>
    </div>
    <div class="widget-body">{dede:sql sql='Select content from dede_arctype where id=19'}[field:content function='cn_substr(html2text(@me),260)'/] {/dede:sql} ...</div>
    <div class="widget-footer"> <a class="more" href="list.php?tid={dede:field name='id'/}"><i class="icon"></i>更多</a> </div>
  </section>