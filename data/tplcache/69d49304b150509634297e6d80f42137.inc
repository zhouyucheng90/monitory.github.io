<section class="widget widget-textlist ">
    <div class="widget-header">
      <h2>{dede:field name='typename'/}</h2>
    </div>
    <div class="widget-body">
      <ul class="list">
      {dede:arclist titlelen='40' row='4'} 
        <li class="list-item"><a href="view.php?aid=[field:id/]"><span class="title">[field:title/]</span>
          <time class="pub-date">[field:pubdate function="MyDate('Y-m-d',@me)"/]</time>
          </a></li>
      {/dede:arclist}    
      </ul>
    </div>
    <div class="widget-footer"> <a class="more" href="list.php?tid={dede:field name='id'/}"><i class="icon"></i>更多</a> </div>
  </section>