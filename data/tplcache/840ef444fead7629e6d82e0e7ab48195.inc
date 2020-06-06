<div class="gcal">
    <div class="btn">
      <div class="bt" style="width:1200px;"><img src="/skin/img/gcbt.png"><span style="color:#FFFFFF">{dede:field name='typename'/}</span>
        <p style="color:#63a3ed;">{dede:field name='typenameen'/}</p>
        <a href="{dede:field name='typeurl'/}"><img src="/skin/img/more.png" border="0" style="float:right"></a></div>
      <div class="clear"></div>
    </div>
    <DIV class=blk_18> <A onmouseup=ISL_StopUp_1() class=LeftBotton onmousedown=ISL_GoUp_1() onmouseout=ISL_StopUp_1() href="javascript:void(0);" target=_self></A>
      <DIV class=pcont id=ISL_Cont_1>
        <DIV class=ScrCont>
          <DIV id=List1_1> {dede:arclist titlelen=80 orderby ='pubdate'} <a class=pl href="[field:arcurl/]">
            <div><img src="[field:picname/]" alt="[field:title/]" /></div>
            <p>[field:title/]<font style="font:14px/1 Arial, Helvetica, sans-serif; color:#67a5ed; float:right; margin-right:10px;">[field:pubdate function="MyDate('Y-m-d',@me)"/]</font></p>
            <span></span></a> {/dede:arclist} </DIV>
          <DIV id=List2_1></DIV>
        </DIV>
      </DIV>
      <A onmouseup=ISL_StopDown_1() class=RightBotton onmousedown=ISL_GoDown_1() onmouseout=ISL_StopDown_1() href="javascript:void(0);" target=_self></A></DIV>
    <SCRIPT type=text/javascript>
                picrun_ini()
                </SCRIPT> 
  </div>