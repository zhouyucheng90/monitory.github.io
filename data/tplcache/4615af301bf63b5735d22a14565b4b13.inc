<section class="widget widget-imagelist ">
    <div class="widget-header">
      <h2>{dede:field name='typename'/}</h2>
    </div>
    <div class="widget-body">
      <ul class="list">
      {dede:arclist titlelen='40' row='8'} 
        <li class="list-item"> <a href="view.php?aid=[field:id/]">
          <div class="image-container"> <img src="[field:picname/]" alt="[field:title/]"> </div>
          <div class="title">[field:title/]</div>
          </a> </li>
      {/dede:arclist}    
      </ul>
    </div>
    <div class="widget-footer"> <a class="more" href="list.php?tid={dede:field name='id'/}"><i class="icon"></i>更多</a> </div>
  </section>