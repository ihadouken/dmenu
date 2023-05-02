char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#f8f8f2", "#282a36" },
	[SchemeSel] = { "#000000", "#ff79c6" },
	[SchemeOut] = { "#000000", "#8be9fd" },
	#if !PLAIN_PROMPT_PATCH && PROMPT_COLOR_PATCH
	[SchemePrompt] = { "#000000", "#ff79c6" },
	#endif // !PLAIN_PROMPT_PATCH && PROMPT_COLOR_PATCH
    #if BORDER_PATCH
    [SchemeBorder] = { "#000000", "#9aedfe" },
    #endif // BORDER_PATCH
	#if MORECOLOR_PATCH
	[SchemeMid] = { "#d7d7d7", "#1c1f24" },
	#endif // MORECOLOR_PATCH
	#if HIGHLIGHT_PATCH || FUZZYHIGHLIGHT_PATCH
	[SchemeSelHighlight] = { "#50fa7b", "#000000" },
	[SchemeNormHighlight] = { "#507a7b", "#000000" },
	#endif // HIGHLIGHT_PATCH | FUZZYHIGHLIGHT_PATCH
};
