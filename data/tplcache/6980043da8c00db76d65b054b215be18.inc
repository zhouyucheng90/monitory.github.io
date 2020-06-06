<div class="pro">
    <div class="pron">
      <div class="bt"><img src="/skin/img/probt.png"><span>{dede:field name='typename'/}</span>
        <p>{dede:field name='typenameen'/}</p>
      </div>
      <div class="clear"></div>
      <div class="lanrenzhijia">
        <div class="tab"> <a href="javascript:;" class="on">1</a> <a href="javascript:;">2</a> </div>
        <div class="clear">此处显示  class "clear" 的内容</div>
        <div class="content">
          <ul>
            <li>
              <dl>
                {dede:arclist titlelen=80 orderby ='pubdate' limit='0,8'}
                <dd><a href="[field:arcurl/]"><img src="[field:picname/]" />
                  <p>[field:title/]</p>
                  <span></span> </a> </dd>
                {/dede:arclist}
              </dl>
            </li>
            <li>
              <dl>
                {dede:arclist titlelen=80 orderby ='pubdate' limit='8,8'}
                <dd><a href="[field:arcurl/]"><img src="[field:picname/]" />
                  <p>[field:title/]</p>
                  <span></span> </a> </dd>
                {/dede:arclist}
              </dl>
            </li>
          </ul>
        </div>
        <script>
$(function(){
	$('.lanrenzhijia .content ul').width(1200*$('.lanrenzhijia .content li').length+'px');
	$(".lanrenzhijia .tab a").mouseover(function(){
		$(this).addClass('on').siblings().removeClass('on');
		var index = $(this).index();
		number = index;
		var distance = -1200*index;
		$('.lanrenzhijia .content ul').stop().animate({
			left:distance
		});
	});
	
	var auto = 0;  //等于1则自动切换，其他任意数字则不自动切换
	if(auto ==1){
		var number = 0;
		var maxNumber = $('.lanrenzhijia .tab a').length;
		function autotab(){
			number++;
			number == maxNumber? number = 0 : number;
			$('.lanrenzhijia .tab a:eq('+number+')').addClass('on').siblings().removeClass('on');
			var distance = -1200*number;
			$('.lanrenzhijia .content ul').stop().animate({
				left:distance
			});
		}
		var tabChange = setInterval(autotab,3000);
		//鼠标悬停暂停切换
		$('.lanrenzhijia').mouseover(function(){
			clearInterval(tabChange);
		});
		$('.lanrenzhijia').mouseout(function(){
			tabChange = setInterval(autotab,3000);
		});
	  }  
});
</script> 
      </div>
    </div>
  </div>