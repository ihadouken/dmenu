char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#ebdbb2", "#282828" },
	[SchemeSel] = { "#000000", "#b16286" },
	[SchemeOut] = { "#ffffff", "#458588" },
    #if BORDER_PATCH
    [SchemeBorder] = { "#000000", "#8ec07c" },
    #endif // BORDER_PATCH
	#if MORECOLOR_PATCH
	[SchemeMid] = { "#ebdbb2", "#1c1f24" },
	#endif // MORECOLOR_PATCH
	#if HIGHLIGHT_PATCH || FUZZYHIGHLIGHT_PATCH
	[SchemeSelHighlight] = { "#689d6a", "#000000" },
	[SchemeNormHighlight] = { "#689d6a", "#000000" },
	#endif // HIGHLIGHT_PATCH | FUZZYHIGHLIGHT_PATCH
};
