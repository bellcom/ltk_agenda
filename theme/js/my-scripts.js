(function($){ //Anonomous namespace
	$(function(){ //jQuery Document Ready
		var isMobile = {
		    Android: function() {
			return navigator.userAgent.match(/Android/i);
		    },
		    BlackBerry: function() {
			return navigator.userAgent.match(/BlackBerry/i);
		    },
		    iOS: function() {
			return navigator.userAgent.match(/iPhone|iPad|iPod/i);
		    },
		    Opera: function() {
			return navigator.userAgent.match(/Opera Mini/i);
		    },
		    Windows: function() {
			return navigator.userAgent.match(/IEMobile/i);
		    },
		    any: function() {
			return (isMobile.Android() || isMobile.BlackBerry() || isMobile.iOS() || isMobile.Opera() || isMobile.Windows());
		    }
		};
		
       if( isMobile.any() ) {          	
         var nemidURL = 'https://www.borger.dk/Sider/NemID.aspx';
         $('div.btn a').each(function() {  
           if (this.href.match( nemidURL )) {
             $(this).attr('href','../nemid-paa-mobil-og-tablet');      
             $(this).attr('target','_self');
           }    
         });                 
        }
 
		/**
		 * MISSING COMMENT
		 **/
		var $Header = $('#header-wrapper');
		$('#block-views-forside-branding-block .view-content a').bind('click', function(e){
			$Header.slideToggle();
			e.preventDefault();
		});

		/**
		 * MISSING COMMENT
		 **/
		$('#icon-close-brand-focus').bind('click', function(e){
			$Header.slideUp();
			e.preventDefault();
		});

		/**
		 * Implement jquery scrollspy on leftmenu.
		 **/
		var $Window = $(window);
		var $Page = $('#page');
		var $Nav = $('.display-nav');
		var $NavWidth = $('.display-nav').width();
		var $Sidebar = $('.region-sidebar-second');
		var $Content = $('#content-wrapper');
		var $ContentColumn = $('#content-column');
		var NavHeight = $Nav.height() - $Window.height();

		$Sidebar.addClass('fixed');
		$Nav.addClass('absolute');

		if($Nav.height() < $Content.height()) {
			$Page.scrollspy({
				min: Math.max(NavHeight + $Nav.offset().top, $Nav.offset().top),
				max: $Content.height(),
				onLeave: function(element, position) {
					$Nav.removeClass('fixed').addClass('absolute');
					$Nav.removeAttr('style');
				},
				onEnter: function(element, position) {
					$Nav.addClass('fixed').removeClass('absolute');
					$Nav.css('top',(-1*NavHeight) + 'px').css('width',$NavWidth);
				},
				onTick: function(element, position) {
					var Z = $ContentColumn.height() - $Window.height() + $ContentColumn.offset().top;
					var Y = position.top - Z;
					if(Z < position.top) {
						$Nav.css('top',(-1*NavHeight - Y) + 'px');
					} else {
						$Nav.css('top',(-1*NavHeight) + 'px');
					}
				}
			});
		}

		/**
		 * Switch toppadding based on header height
		 **/
		var $Leaderboard = $('#leaderboard-wrapper');
		$Content.css('padding-top', $Leaderboard.height());
		$Window.resize(function(){
			$Content.css('padding-top', $Leaderboard.height());
			if($Window.width() < 1025){
				$Sidebar.removeClass('fixed');
			}
			if($Window.width() > 1025){
				$Sidebar.addClass('fixed');
			}
		});

		/**
		 * Make sure the contentcol is never shorter than left. (remove risk of hiding half the leftcol)
		 **/
		var $AsidedisplayNav = $('aside.display-nav');
		if($AsidedisplayNav.height() > $ContentColumn.height()){
			$ContentColumn.height($AsidedisplayNav.height())
		}

		/**
		 * Mobile menu toggle
		 **/
		var $Menu1 = $('#block-menu-block-1');
		var $Menu2 = $('#block-menu-block-2');
		$('#mobile-menu').toggle(function(){
			$(this).addClass('mob-menu-toggle-hide');
			$Menu2.hide().addClass('mob-menu-hide');
			$Menu1.hide().addClass('mob-menu-hide');		
			$Content.css('padding-top', $Leaderboard.height());
		}, function(){
			$(this).removeClass('mob-menu-toggle-hide');
			$Menu2.show().removeClass('mob-menu-hide');
			$Menu1.show().removeClass('mob-menu-hide');
			$Content.css('padding-top', $Leaderboard.height());	
		});
	    /*
	     * Add target=_blank to external links
	     */
	    $("a[href*='http://']:not([href*='"+location.hostname.replace("www.","")+"'])").attr('target','_blank').addClass('external');
		
		/*
		* Get rid of EU cookie box if not on www.ltk.dk
		*/
		if (window.location.hostname != 'www.ltk.dk') {
			setTimeout(function(){$('#sliding-popup').hide();}, 1000);
		}
		
		/*
		 * Anchor links slide up to fixed header
		 */
		$("a[href^='#']").click(function(e) {
			var activeDestination = $(this).attr("href");
			$("html,body").animate({
				scrollTop: $(activeDestination).offset().top - 60}, 1000);	
				e.preventDefault();				
			});
    /**
     * Trick a clone link for frontpage-news,
     * make the link apear below in responsive.
     */
    if ($('#block-views-nyhed-paa-forside-block-2').length) {
      $('#block-views-nyhed-paa-forside-block-1').addClass('second-more');
      $('#block-views-nyhed-paa-forside-block-2').append($('#block-views-nyhed-paa-forside-block-1 .more-link').clone());
    }
    // Meeting Accordion.
          $meetings = $('.meeting-title');      

      if ($meetings.length)   {
        $meetings.wrapInner("<span class='faq-title-container'></span>").accordion();
      }

      if (window.location.hash) {
        var $anchor_element = $(window.location.hash);

        if ($anchor_element.length) {
          $anchor_element.find('.meeting-title').not('.open').trigger('click');
        }
      }
  });
})( jQuery );