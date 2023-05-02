char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#d0d0d0", "#292d3e" },
	[SchemeSel] = { "#1c1f24", "#c792ea" },
	[SchemeOut] = { "#000000", "#82aaff" },
	#if !PLAIN_PROMPT_PATCH && PROMPT_COLOR_PATCH
	[SchemePrompt] = { "#1c1f24", "#c792ea" },
	#endif // !PLAIN_PROMPT_PATCH && PROMPT_COLOR_PATCH
    #if BORDER_PATCH
    [SchemeBorder] = { "#000000", "#a3f7ff" },
    #endif // BORDER_PATCH
	#if MORECOLOR_PATCH
	[SchemeMid] = { "#d7d7d7", "#1c1f24" },
	#endif // MORECOLOR_PATCH
	#if HIGHLIGHT_PATCH || FUZZYHIGHLIGHT_PATCH
	[SchemeSelHighlight] = { "#c3e88d", "#000000" },
	[SchemeNormHighlight] = { "#c3e88d", "#000000" },
	#endif // HIGHLIGHT_PATCH | FUZZYHIGHLIGHT_PATCH
};
